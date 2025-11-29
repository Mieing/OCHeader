@class NSString;
@protocol IESLiveStrategyEventDispatcherObserver;

@interface IESLiveStrategyProtocolContext : NSObject

@property (copy, nonatomic) NSString *factorName;
@property (retain, nonatomic) id inputValue;
@property (weak, nonatomic) id<IESLiveStrategyEventDispatcherObserver> observer;

- (void).cxx_destruct;

@end
