@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEUserWorkCellUniversalContainerComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) NSMutableDictionary *componentDict;
@property (retain, nonatomic) NSMutableArray *ignoreSubComponentClassNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

@end
