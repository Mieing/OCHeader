@class NSString, NSTimer, NSMutableSet, NSArray;

@interface AWEPadKeyboardKeyPressInfo : NSObject

@property (nonatomic) long long doubleClickCount;
@property (nonatomic) long long longPressCount;
@property (retain, nonatomic) NSMutableSet *operationSet;
@property (retain, nonatomic) NSTimer *pressTimer;
@property (nonatomic) BOOL is;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double downTime;
@property (nonatomic) long long pressState;
@property (nonatomic) long long pressCount;
@property (readonly, nonatomic) NSArray *operationList;

- (void)addKeyBoardOperation:(id)a0;
- (void)removeKeyBoardOperation:(id)a0;
- (void)invokeLongPressEnd;
- (void)invokeLongPressBegin;
- (void)invokeDoubleClick;
- (void)invokeClick;
- (void)startTimerIfNeededWithTimeOut:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
