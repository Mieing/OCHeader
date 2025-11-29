@class NSData;

@interface CGPSeiNode : GPBMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSData *seiData;

+ (id)descriptor;

@end
