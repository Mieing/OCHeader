@class NSArray, NSDictionary, NSString, AWEUserModel, NSNumber;

@interface AFDCustomMorePopoverSheetControllerContext : NSObject <AFDCustomMorePopoverSheetControllerContextProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL hasRelationData;
@property (copy, nonatomic) NSArray *typeSections;
@property (nonatomic) BOOL disabledHighlight;
@property (retain, nonatomic) NSNumber *targetPadding;
@property (nonatomic) unsigned long long showMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
