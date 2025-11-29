@class NSString;
@protocol ACCMVTemplateModelProtocol;

@interface AWESelectTemplateModel : NSObject

@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> tpModel;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *meta;

- (void).cxx_destruct;

@end
