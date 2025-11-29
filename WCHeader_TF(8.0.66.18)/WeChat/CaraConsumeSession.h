@class NSString;

@interface CaraConsumeSession : NSObject <CaraNativeConsumeSessionBase>

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) float stayTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 stayTimeInterval:(float)a1;
- (id)zidl;
- (void).cxx_destruct;

@end
