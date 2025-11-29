@class NSString, NSDateFormatter, NSMutableArray;

@interface AWETemplateInterestDiscoverBarManager : NSObject <AWETemplateInterestDiscoverBarManagerProtocol>

@property (retain, nonatomic) NSDateFormatter *logDateFormatter;
@property (retain, nonatomic) NSMutableArray *showedArray;
@property (nonatomic) long long currentPlayVideoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
