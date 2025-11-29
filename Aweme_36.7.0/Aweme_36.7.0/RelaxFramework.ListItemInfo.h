@class NSString;

@interface RelaxFramework.ListItemInfo : NSObject {
    void /* function */ itemKey;
}

@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic, copy) NSString *itemKey;
@property (nonatomic) BOOL isBinding;
@property (nonatomic) double originX;
@property (nonatomic) double originY;
@property (nonatomic) BOOL updated;

- (id)initWithHeight:(double)a0 width:(double)a1 itemKey:(id)a2 isBinding:(BOOL)a3 originX:(double)a4 originY:(double)a5 updated:(BOOL)a6;
- (void).cxx_destruct;
- (id)init;

@end
