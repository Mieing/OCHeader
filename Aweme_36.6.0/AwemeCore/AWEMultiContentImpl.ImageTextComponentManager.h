@interface AWEMultiContentImpl.ImageTextComponentManager : NSObject <AWEImageTextComponentManagerProtocol> {
    void /* unknown type, empty encoding */ registedDict;
}

@property (nonatomic, weak) void /* function */ pageContext;
@property (nonatomic, weak) void /* function */ handler;
@property (nonatomic, weak) void /* function */ sectionViewModel;
@property (nonatomic, weak) void /* function */ sectionController;

- (void)executeSelector:(SEL)a0 inProtocol:(id)a1 withArgs:(id)a2;
- (id)findBaseComponentWith:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
