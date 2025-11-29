@class NSString;

@interface StatusIconInitInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mainIconConfigLocalPath;
@property (retain, nonatomic) NSString *panelIconConfigLocalPath;
@property (retain, nonatomic) NSString *coverPassthroughIconLocalPath;
@property (retain, nonatomic) NSString *serverKvlocalPath;

+ (void)initialize;

- (void)setServerKvlocalPath:(id)a0;
- (id)serverKvlocalPath;
- (void)setCoverPassthroughIconLocalPath:(id)a0;
- (id)coverPassthroughIconLocalPath;
- (void)setPanelIconConfigLocalPath:(id)a0;
- (id)panelIconConfigLocalPath;
- (void)setMainIconConfigLocalPath:(id)a0;
- (id)mainIconConfigLocalPath;

@end
