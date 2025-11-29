@class NSString;
@protocol AWEStudioTemplateCutSameServiceProtocol, AWEStudioTemplatePixelServiceProtocol, AWEStudioTemplateUtilsServiceProtocol, AWEStudioTemplateTrackerServiceProtocol;

@interface AWEStudioTemplateService : HTSService <AWEStudioTemplateServiceProtocol>

@property (readonly, nonatomic) id<AWEStudioTemplateCutSameServiceProtocol> cutSame;
@property (readonly, nonatomic) id<AWEStudioTemplatePixelServiceProtocol> pixel;
@property (readonly, nonatomic) id<AWEStudioTemplateTrackerServiceProtocol> tracker;
@property (readonly, nonatomic) id<AWEStudioTemplateUtilsServiceProtocol> utils;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
