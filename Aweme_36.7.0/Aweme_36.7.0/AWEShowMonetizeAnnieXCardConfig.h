@class NSString, NSDictionary;

@interface AWEShowMonetizeAnnieXCardConfig : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (nonatomic) unsigned long long videoType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredFrame;
@property (nonatomic) BOOL useShowAnnieX;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) id /* block */ trackParamsHandler;
@property (nonatomic, getter=isEnableUseStandardAnnieContainer) BOOL enableUseStandardAnnieContainer;

- (void).cxx_destruct;

@end
