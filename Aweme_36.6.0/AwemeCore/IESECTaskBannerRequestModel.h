@class NSString, NSDictionary;

@interface IESECTaskBannerRequestModel : NSObject

@property (copy, nonatomic) NSString *taskEnterFrom;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDictionary *taskRequestParams;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

+ (id)taskBannerModelFromParams:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
