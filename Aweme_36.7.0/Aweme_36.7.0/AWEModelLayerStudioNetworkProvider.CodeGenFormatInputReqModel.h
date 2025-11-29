@class NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenFormatInputReqModel : NSObject

@property (nonatomic, retain) NSString *formatType;
@property (nonatomic, retain) NSString *format;

- (id)toJSONString;
- (id)initWithFormatType:(id)a0 format:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
