@class NSMutableDictionary;
@protocol TextStateRedDotLogicDelegate;

@interface TextStateRedDotLogic : NSObject

@property (retain, nonatomic) NSMutableDictionary *redDotToHandlerDict;
@property (weak, nonatomic) id<TextStateRedDotLogicDelegate> delegate;

- (id)init;
- (BOOL)shouldShowRedDot:(unsigned int)a0;
- (void)disposeRedDot:(unsigned int)a0;
- (id)handlerForRedDot:(unsigned int)a0;
- (void).cxx_destruct;

@end
