@class HTSFormatEnterRoomBusiParams, HTSFormatAsyncResult, HTSFormatEnterRoomEventParams, HTSFormatEnterRoomContext, NSString, NSNumber, AWEFormatEnterRoomPageConfig;
@protocol AWEFormatOSSignPostDebugService, HTSFormatRoomService;

@interface HTSFormatEnterRoomAisle : NSObject

@property (retain, nonatomic) HTSFormatAsyncResult *result;
@property (retain, nonatomic) HTSFormatEnterRoomContext *enterContext;
@property (retain, nonatomic) HTSFormatEnterRoomEventParams *eventParams;
@property (retain, nonatomic) HTSFormatEnterRoomBusiParams *busiParams;
@property (retain, nonatomic) id<AWEFormatOSSignPostDebugService> osSignPostService;
@property (retain, nonatomic) id<HTSFormatRoomService> formatRoom;
@property (retain, nonatomic) NSNumber *formatId;
@property (retain, nonatomic) NSNumber *imBotId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isAssistant;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) AWEFormatEnterRoomPageConfig *pageConfig;

+ (BOOL)formatEnable;

- (void).cxx_destruct;
- (id)init;

@end
