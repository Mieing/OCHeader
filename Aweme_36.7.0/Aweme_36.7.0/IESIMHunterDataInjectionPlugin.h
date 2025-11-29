@interface IESIMHunterDataInjectionPlugin : HunterBasePlugin

@property (nonatomic) long long contentMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) long long widthMode;
@property (copy, nonatomic) id /* block */ injectPreLayoutInfoBlock;
@property (copy, nonatomic) id /* block */ injectPerfDataIntoContextBlock;
@property (copy, nonatomic) id /* block */ onLoadStartBlock;
@property (copy, nonatomic) id /* block */ onLoadEndBlock;

- (void)onHunterLoadStart:(id)a0;
- (void)onHunterProcessEnd:(id)a0;
- (void)onHunterBindStart:(id)a0;
- (void)onHunterLoadEnd:(id)a0;
- (void).cxx_destruct;

@end
