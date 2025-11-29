@class NSString, IESGCPPBGiftPackage, IESGCPPBGetLoadingPageResponse_TXPCMediaContent, NSMutableArray;

@interface IESGCPPBGetLoadingPageResponse_Data : GPBMessage

@property (retain, nonatomic) NSMutableArray *guideTextListArray;
@property (readonly, nonatomic) unsigned long long guideTextListArray_Count;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (retain, nonatomic) IESGCPPBGiftPackage *giftPackage;
@property (nonatomic) BOOL hasGiftPackage;
@property (retain, nonatomic) IESGCPPBGetLoadingPageResponse_TXPCMediaContent *txPcMediaContent;
@property (nonatomic) BOOL hasTxPcMediaContent;

+ (id)descriptor;

@end
