@class NSString;
@protocol RxLocking;

@interface RxReadWriteLock : NSObject {
    struct SharedPtr<Rx::ReadWriteLock, Rx::ESPMode::Fast> { struct ReadWriteLock *Object; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *ReferenceController; } SharedReferenceCount; } _rwl;
}

@property (readonly, nonatomic) id<RxLocking> readLock;
@property (readonly, nonatomic) id<RxLocking> writeLock;
@property (readonly, nonatomic) NSString *name;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithName:(id)a0;
- (id)debugDescription;
- (BOOL)isReading;
- (BOOL)isWriting;

@end
