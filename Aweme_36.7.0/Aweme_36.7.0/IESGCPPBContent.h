@class NSString, NSMutableArray;

@interface IESGCPPBContent : GPBMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *avatarArray;
@property (readonly, nonatomic) unsigned long long avatarArray_Count;
@property (copy, nonatomic) NSString *contentType;

+ (id)descriptor;

@end
