@class CMCScene;

@interface CMCCallable : CMCObject

@property (readonly, weak, nonatomic) CMCScene *scene;
@property (retain, nonatomic) id block;

- (id)initWithName:(id)a0 inScene:(id)a1;
- (void).cxx_destruct;

@end
