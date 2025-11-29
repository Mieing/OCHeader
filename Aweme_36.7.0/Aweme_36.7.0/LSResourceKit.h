@class NSBundle, NSDictionary, NSString;

@interface LSResourceKit : NSObject

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSDictionary *layout;
@property (readonly, nonatomic) NSDictionary *color;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, weak, nonatomic) LSResourceKit *parent;

+ (id)resourceWithName:(id)a0 path:(id)a1 parent:(id)a2;

- (id)imageForName:(id)a0;
- (id)layoutForName:(id)a0;
- (id)textForName:(id)a0;
- (id)initWithName:(id)a0 path:(id)a1 parent:(id)a2;
- (id)filePathForName:(id)a0 type:(id)a1 inDirectory:(id)a2;
- (id)dataForName:(id)a0 type:(id)a1 inDirectory:(id)a2;
- (void).cxx_destruct;
- (id)colorForName:(id)a0;

@end
