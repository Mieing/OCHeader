@class NSString, NSMutableArray;

@interface GofeedBizStructV2 : GPBMessage

@property (copy, nonatomic) NSString *itemRecallSource;
@property (nonatomic) BOOL hasItemRecallSource;
@property (retain, nonatomic) NSMutableArray *mediumBannerListArray;
@property (readonly, nonatomic) unsigned long long mediumBannerListArray_Count;

+ (id)descriptor;

- (id)itemRecallSource;

@end
