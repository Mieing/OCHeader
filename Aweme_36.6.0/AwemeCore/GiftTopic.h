@class NSString, HTSLiveImage, PageInfo;

@interface GiftTopic : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveImage *nameImage;
@property (nonatomic) BOOL hasNameImage;
@property (retain, nonatomic) PageInfo *pageInfo;
@property (nonatomic) BOOL hasPageInfo;

+ (id)descriptor;

@end
