@class NSString, AWEListDataController;

@interface AWERTVLongVideoDataController : AWEListDataController

@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) AWEListDataController *recommendFeedDataController;
@property (nonatomic) BOOL enableFetchData;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithRoomID:(id)a0;
- (void)enableFetchData:(BOOL)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
