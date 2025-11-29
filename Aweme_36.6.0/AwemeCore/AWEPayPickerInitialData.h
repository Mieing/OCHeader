@class NSString, NSDictionary;

@interface AWEPayPickerInitialData : NSObject <AWEYAPPickerConfig>

@property (nonatomic) BOOL isMultiSelect;
@property (copy, nonatomic) NSString *conId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ dataBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
