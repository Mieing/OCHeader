@class IESPortraitConfig;

@interface AWECommonPortraitHandler : NSObject

@property (retain, nonatomic) IESPortraitConfig *portraitConfig;
@property (copy, nonatomic) id /* block */ portraitGetter;

- (id)initWithPortraitGetter:(id /* block */)a0 config:(id)a1;
- (id)getPortrait;
- (void).cxx_destruct;

@end
