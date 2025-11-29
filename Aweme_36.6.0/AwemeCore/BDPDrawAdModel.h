@class NSString, AWECommerceMannorAdDataModel, BDMannorStyleTemplateModel, NSDictionary;

@interface BDPDrawAdModel : NSObject

@property (retain, nonatomic) BDMannorStyleTemplateModel *styleTemplateModel;
@property (retain, nonatomic) AWECommerceMannorAdDataModel *adDataModel;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *streamData;
@property (nonatomic) long long videoAdType;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *roomOwnerName;
@property (copy, nonatomic) NSString *roomTitle;
@property (copy, nonatomic) NSDictionary *originalDict;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
