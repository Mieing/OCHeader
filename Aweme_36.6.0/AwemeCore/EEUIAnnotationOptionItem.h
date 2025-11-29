@class NSString;

@interface EEUIAnnotationOptionItem : NSObject <EEUIAnnotationOptionItem>

@property (copy, nonatomic) NSString *optionKey;
@property (copy, nonatomic) NSString *optionName;
@property (copy, nonatomic) NSString *optionIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnotationUIMoreCandidate:(const void *)a0;
- (void).cxx_destruct;

@end
