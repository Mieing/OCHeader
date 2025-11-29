@class NSMapTable, NSObject;

@interface DJIProxyConstructorMap : NSObject {
    NSObject *lockToken;
}

@property (retain) NSMapTable *interfaceClassMapping;

+ (id)get;

- (id)init;
- (void)mapConstructor:(id)a0 interface:(id)a1;
- (id)createObject:(id)a0;
- (void).cxx_destruct;

@end
