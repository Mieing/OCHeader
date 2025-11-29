@class NSString, GetRecommendFeedsResp_RecommendFeedsConfig, NSData, NSMutableArray, BaseResponse;

@interface GetRecommendFeedsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recommendCard;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendFeedsConfig *config;
@property (retain, nonatomic) NSString *recommendFeedsWording;
@property (retain, nonatomic) NSData *buffer;

+ (void)initialize;

@end
