@class NSString;

@interface MMFinderLiveFansGroupRightInfo : NSObject

@property (nonatomic) unsigned int level;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *imageUrlString;
@property (retain, nonatomic) NSString *imageUrlStringDark;
@property (retain, nonatomic) NSString *imageUrlStringLight;

+ (id)infoWithLevel:(unsigned int)a0 desc:(id)a1 imageUrlString:(id)a2 imageUrlStringDark:(id)a3 imageUrlStringLight:(id)a4;

- (void).cxx_destruct;

@end
