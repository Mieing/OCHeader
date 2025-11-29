@class NSString;

@interface AWEGrouponLifeFeedsHighLightConfig : NSObject

@property (nonatomic) long long borderWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) long long forceCornerRadius;
@property (nonatomic) float showDuration;
@property (nonatomic) float stayHighlightDuration;
@property (nonatomic) float dismissDuration;
@property (nonatomic) long long styleToShowBorder;
@property (copy, nonatomic) id /* block */ showComplete;
@property (copy, nonatomic) id /* block */ dismissComplete;

+ (id)createHighLightConfigWithData:(id)a0;

- (void).cxx_destruct;

@end
