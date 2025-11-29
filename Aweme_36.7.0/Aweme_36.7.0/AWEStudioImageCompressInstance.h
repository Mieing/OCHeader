@class NSString, BDXBridgeStudioCompressImageMethodParamModel, NSArray;

@interface AWEStudioImageCompressInstance : NSObject

@property (retain, nonatomic) BDXBridgeStudioCompressImageMethodParamModel *paramModel;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSArray *tempRawItems;
@property (copy, nonatomic) NSArray *tempItems;

- (void)p_callback;
- (void)p_compress:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;

@end
