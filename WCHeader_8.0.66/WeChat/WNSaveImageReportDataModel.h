@class NSString;

@interface WNSaveImageReportDataModel : MMObject

@property (nonatomic) int action;
@property (nonatomic) unsigned long long outputStyle;
@property (retain, nonatomic) NSString *fontStyle;
@property (retain, nonatomic) NSString *bgStyle;
@property (nonatomic) unsigned long long alignStyle;
@property (nonatomic) unsigned long long fontWeight;
@property (nonatomic) unsigned long long saveResult;
@property (nonatomic) unsigned long long downloadStatus;
@property (retain, nonatomic) NSString *favId;
@property (nonatomic) unsigned long long source;

- (id)initDefaultDataModel;
- (id)emptyBase64String;
- (void).cxx_destruct;

@end
