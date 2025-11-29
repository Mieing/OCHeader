@class NSString;

@interface RedPacketCoverInfoDetailForPlaceOrder : WXPBGeneratedMessage

@property (nonatomic) unsigned int statusFlag;
@property (retain, nonatomic) NSString *corpLogoDynamicUrl;
@property (retain, nonatomic) NSString *corpLogoDynamicMd5;
@property (retain, nonatomic) NSString *thumbImageUrl;
@property (retain, nonatomic) NSString *thumbPagUrl;
@property (nonatomic) unsigned int maxThumbPagSize;
@property (nonatomic) BOOL useThumbImage;

+ (void)initialize;

@end
