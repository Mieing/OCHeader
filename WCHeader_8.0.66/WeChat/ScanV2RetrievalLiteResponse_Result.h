@class NSString, NSData;

@interface ScanV2RetrievalLiteResponse_Result : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic) int status;
@property (nonatomic) int categoryId;
@property (retain, nonatomic) NSData *businessBuffer;

+ (void)initialize;

@end
