@class NSString;

@interface AWEDiskCleanModel : NSObject <AWEDiskCleanModelProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL haveCache;
@property (nonatomic) BOOL separatorLineHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
