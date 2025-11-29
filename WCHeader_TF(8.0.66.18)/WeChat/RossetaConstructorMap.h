@class NSMapTable, NSObject;

@interface RossetaConstructorMap : NSObject {
    NSObject *lockToken;
}

@property (retain) NSMapTable *interfaceClassMapping;

+ (id)get;

- (id)init;
- (void)mapConstructor:(id)a0 interface:(Class)a1;
- (id)createObject:(id)a0;
- (void).cxx_destruct;

@end
