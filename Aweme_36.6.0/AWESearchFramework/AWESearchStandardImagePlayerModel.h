@class AWESearchBaseImagePlayerModel, NSString, NSDictionary, AWEAwemeModel, AWESearchImagePlayerInteractorComponentModel;

@interface AWESearchStandardImagePlayerModel : NSObject

@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWESearchBaseImagePlayerModel *imagePlayerModel;
@property (nonatomic) unsigned long long radiusType;
@property (retain, nonatomic) AWESearchImagePlayerInteractorComponentModel *imagePlayerInteractorModel;

- (void).cxx_destruct;

@end
