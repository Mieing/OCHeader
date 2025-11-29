@class NSError, NSString, NSArray;
@protocol ACCMVTemplateModelProtocol;

@interface AWEDetailMVPreviewPageInfoModel : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *templateTitle;
@property (copy, nonatomic) NSString *authorName;
@property (nonatomic) BOOL isColledted;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long usageAmount;
@property (retain, nonatomic) NSArray *playURLList;
@property (retain, nonatomic) NSArray *avatarURLList;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (copy, nonatomic) NSArray *fragments;

- (void).cxx_destruct;

@end
