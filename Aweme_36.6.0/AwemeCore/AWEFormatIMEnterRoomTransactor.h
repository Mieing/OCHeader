@class AWEFormatIdToBotIdApi;

@interface AWEFormatIMEnterRoomTransactor : NSObject

@property (retain, nonatomic) AWEFormatIdToBotIdApi *transApi;

+ (id)sharedInstance;

- (id)enterV2FormatRoomWithFormatAisle:(id)a0;
- (void)processError:(id)a0;
- (void)processRealFormatEnterRoomWithFormatAisle:(id)a0;
- (id)getBizParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
