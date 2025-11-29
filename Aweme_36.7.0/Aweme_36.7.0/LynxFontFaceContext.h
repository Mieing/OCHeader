@class NSDictionary, NSMutableDictionary, UIView;
@protocol LynxGenericResourceFetcher, LUIBodyView, LynxResourceFetcher, LynxResourceProvider;

@interface LynxFontFaceContext : NSObject {
    NSMutableDictionary *_dic;
}

@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (weak, nonatomic) id<LynxResourceProvider> resourceProvider;
@property (weak, nonatomic) id<LynxGenericResourceFetcher> genericResourceServiceFetcher;
@property (weak, nonatomic) UIView<LUIBodyView> *rootView;
@property (weak, nonatomic) NSDictionary *builderRegistedAliasFontMap;

- (void)addFontFace:(id)a0;
- (id)getFontFaceWithFamilyName:(id)a0;
- (void).cxx_destruct;

@end
