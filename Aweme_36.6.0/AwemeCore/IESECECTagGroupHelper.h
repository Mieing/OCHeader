@interface IESECECTagGroupHelper : NSObject

+ (id)parseTagGroupData:(id)a0 attributes:(id)a1;
+ (id)layoutWithParsedData:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2 viewScale:(double)a3 updateBlock:(id /* block */)a4;
+ (struct IESECECTagGroupSingleTagWidthResult { double x0; BOOL x1; })syncCalculatePreciseSingleTagWidthWithData:(id)a0 strategy:(long long)a1 updateIfNeededBlock:(id /* block */)a2;

@end
