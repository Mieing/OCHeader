@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface _YYWebImageSetterDicForButton : NSObject {
    NSMutableDictionary *_dic;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (id)setterForState:(id)a0;
- (id)lazySetterForState:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
