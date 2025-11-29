@class NSString;

@interface AWEShareSaveTitleViewModel : NSObject <AWEShareSaveViewModelProtocol>

@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
