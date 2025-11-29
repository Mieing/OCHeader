@class NSString, NSMutableArray;

@interface GameTagInfoV2 : GPBMessage

@property (nonatomic) long long tagId;
@property (nonatomic) BOOL hasTagId;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) BOOL hasTagName;
@property (retain, nonatomic) NSMutableArray *gameIdListArray;
@property (readonly, nonatomic) unsigned long long gameIdListArray_Count;

+ (id)descriptor;

- (id)gameIdListArray;
- (id)tagName;
- (long long)tagId;

@end
