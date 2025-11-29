@class NSString, IESECYataErrorContentView;

@interface IESECOrderErrorViewModel : IESECYataBaseViewModel <YataSectionViewModel>

@property (nonatomic) unsigned long long errorType;
@property (retain, nonatomic) IESECYataErrorContentView *errorContentView;
@property (readonly, nonatomic) Class sectionClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
