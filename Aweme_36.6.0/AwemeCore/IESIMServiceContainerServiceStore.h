@class NSLock;

@interface IESIMServiceContainerServiceStore : NSObject

@property (retain) id service;
@property (readonly, nonatomic) NSLock *lock;

- (void).cxx_destruct;
- (id)init;

@end
