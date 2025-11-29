@class NSString, IESGCPRequestDispatchStrategy;

@interface IESGCPExplainCardNoticeMessage : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long introduceType;
@property (retain, nonatomic) IESGCPRequestDispatchStrategy *dispatchStrategy;
@property (copy, nonatomic) NSString *updatedData;
@property (retain, nonatomic) id originShowMessage;

- (void).cxx_destruct;

@end
