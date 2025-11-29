@class NSDictionary;

@interface GXTextData : GXData

@property (retain, nonatomic) id value;
@property (weak, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSDictionary *styleParams;
@property (retain, nonatomic) NSDictionary *extendParams;

- (void).cxx_destruct;

@end
