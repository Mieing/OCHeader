@class NSArray, NSString;

@interface BDSCProtocolPriorityConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL enable;
@property (nonatomic) long long searchType;
@property (copy, nonatomic) NSArray *ordered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
