@class NSMutableDictionary;
@protocol TextStateNewXMLLogicDelegate;

@interface TextStateNewXMLLogic : NSObject <IMsgExt>

@property (retain, nonatomic) NSMutableDictionary *typeToHandlerMap;
@property (weak, nonatomic) id<TextStateNewXMLLogicDelegate> delegate;

+ (id)newXMLTypeList;
+ (BOOL)isBypassChannelSupportedForType:(id)a0;

- (id)init;
- (void)initData;
- (void)initHandler;
- (void)registerNewXMLType:(id)a0 withHandler:(id /* block */)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)initModTextStatusHandler;
- (void)initTextStatusLikeHandler;
- (void)initTextStatusCommentHandler;
- (void)initTextStatusIconConfigRefreshHandler;
- (void)initStatusNewModifyHandler;
- (void).cxx_destruct;

@end
