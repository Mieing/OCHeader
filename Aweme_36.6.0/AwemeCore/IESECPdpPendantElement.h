@class NSNumber;

@interface IESECPdpPendantElement : IESECPdpStdLynxElement

@property (retain, nonatomic) NSNumber *topMargin;
@property (retain, nonatomic) NSNumber *bottomMargin;
@property (retain, nonatomic) NSNumber *rightMargin;
@property (retain, nonatomic) NSNumber *leftMargin;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
