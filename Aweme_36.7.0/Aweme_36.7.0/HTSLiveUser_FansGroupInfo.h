@class NSString;

@interface HTSLiveUser_FansGroupInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *listFansGroupURL;

+ (id)descriptor;

- (id)listFansGroupURL;
- (void)setListFansGroupURL:(id)a0;

@end
