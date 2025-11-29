@interface BTCanvasItemDataParser : NSObject

+ (id)canvasIdWithBizType:(unsigned int)a0 bizId:(id)a1;
+ (id)parseDataFromMsg:(id)a0;
+ (id)parseAdDataFromJsonStr:(id)a0;
+ (id)parseRecommendDataFromMsg:(id)a0;
+ (id)parseRecCardWrapper:(id)a0;
+ (id)parseDataFromRecoFlowMsg:(id)a0;
+ (id)getCanvasIdFromRecCardWrapper:(id)a0;

@end
