@class NSArray, NSDictionary, NSMutableDictionary;

@interface LynxGestureDetectorDarwin : NSObject

@property (readonly, nonatomic) unsigned int gestureID;
@property (readonly, nonatomic) unsigned long long gestureType;
@property (readonly, copy, nonatomic) NSArray *gestureCallbackNames;
@property (readonly, copy, nonatomic) NSDictionary *relationMap;
@property (readonly, copy, nonatomic) NSMutableDictionary *configMap;

- (id)initWithGestureID:(unsigned int)a0 gestureType:(unsigned long long)a1 gestureCallbackNames:(id)a2 relationMap:(id)a3;
- (id)initWithGestureID:(unsigned int)a0 gestureType:(unsigned long long)a1 gestureCallbackNames:(id)a2 relationMap:(id)a3 configMap:(id)a4;
- (void).cxx_destruct;

@end
