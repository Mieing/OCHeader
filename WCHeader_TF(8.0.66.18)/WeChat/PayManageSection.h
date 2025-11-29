@class NSArray, TextViewData;

@interface PayManageSection : NSObject

@property (retain) NSArray *extra_labels;
@property (retain) TextViewData *header;
@property (retain) TextViewData *footer;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
