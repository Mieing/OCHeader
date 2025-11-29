@class NSString;
@protocol AWEIMShareModelProtocol;

@interface AWEShareSaveIMViewModel : NSObject <AWEShareSaveViewModelProtocol>

@property (retain, nonatomic) id<AWEIMShareModelProtocol> model;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL hasSendMsg;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly, nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imModelsFromShareModels:(id)a0 pageIdentifier:(id)a1;

- (void).cxx_destruct;

@end
