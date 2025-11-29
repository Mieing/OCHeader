@class AWEDetailFeedPageTempInfoData, AWEDetailFeedCoreContainer, AWEDetailFeedBusinessContainer, AWEDetailFeedPageInfoData, AWEDetailFeedRootEventForwardManager;

@interface AWEDetailFeedRootContainer : AWEArchContainer

@property (retain, nonatomic) AWEDetailFeedCoreContainer *coreContainer;
@property (retain, nonatomic) AWEDetailFeedBusinessContainer *bizContainer;
@property (retain, nonatomic) AWEDetailFeedRootEventForwardManager *eventForwardManager;
@property (retain, nonatomic) AWEDetailFeedPageInfoData *pageInfoData;
@property (retain, nonatomic) AWEDetailFeedPageTempInfoData *tmp_pageTempInfoData;

- (void)setupContainer;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)setupDetailTableView;
- (void).cxx_destruct;
- (id)tableView;
- (void)viewDidLoad;

@end
